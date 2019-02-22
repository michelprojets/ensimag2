import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.annotation.Resource;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.sql.DataSource;
import static sun.security.jgss.GSSUtil.login;

/**
 *
 * @author potongmv
 */
@WebServlet(urlPatterns = {"/add_customer"})
public class AddCustomer extends HttpServlet {
    
    @Resource(name="jdbc/YOEUNGM")
    private DataSource ds;

    /**
     * Processes requests for both HTTP <code>GET</code> and <code>POST</code>
     * methods.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        try (PrintWriter out = response.getWriter()) {
            /* TODO output your page here. You may use following sample code. */
            //this.printParameters(request);
            
            String ville = request.getParameter("ville");
            String login = request.getParameter("login");
            String mdp =  request.getParameter("mdp");
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet AddCustomer</title>");            
            out.println("</head>");
            out.println("<body>");
            if (!addUser(login, mdp, ville)){
                out.println("<h1>Utilisateur deja existant</h1>");
                
            }
            else{
                out.println("<h1>Bonjour " + request.getParameter("nom") + "</h1>");
            }
            out.println("<a href='index.html' >index</a>");
            out.println("</body>");
            out.println("</html>");
        }
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>
    
    public boolean addUser(String login, String mdp, String ville){
        try(Connection conn = ds.getConnection()){
            Statement st_select = conn.createStatement();
            String query_select = "select * from Users where login = '" + login + 
                               "' and password = '" + mdp + "'";
            st_select.executeQuery(query_select);
            ResultSet res = st_select.getResultSet();
            if (res.next())
                if (res.getString("login").equals(login))
                    return false;
            
            Statement st_update = conn.createStatement();
            String query_insert = "insert into Users values('" + login + "', '" + mdp + 
                            "', '" + ville + "')";
            st_update.executeUpdate(query_insert);
        }
        catch(SQLException e){
            System.out.println(e.toString());
        }
        return true;
    }
    
    public void printParameters(HttpServletRequest request){
        while(request.getParameterNames().hasMoreElements()){
            System.out.println(request.getParameterNames().nextElement());
        }
    }

}
