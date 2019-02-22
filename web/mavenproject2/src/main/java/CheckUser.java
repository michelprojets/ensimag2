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
import javax.servlet.http.HttpSession;
import javax.sql.DataSource;

/**
 *
 * @author potongmv
 */
@WebServlet(name = "CheckUser", urlPatterns = {"/checkuser"})
public class CheckUser extends HttpServlet {

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
        
        String login = request.getParameter("login");
        String mdp = request.getParameter("password");
        
        //cookie !
        /*
        Cookie cookie = new Cookie("utilisateur", name);
        response.addCookie(cookie);
        */
        //session !
        HttpSession session = request.getSession();
        if(this.isLoginValid(login, mdp)) {
            session.setAttribute("utilisateur", login);
        }
        
        
        try (PrintWriter out = response.getWriter()) {
            /* TODO output your page here. You may use following sample code. */
            out.println("<!DOCTYPE html>");
            out.println("<html>");
            out.println("<head>");
            out.println("<title>Servlet CheckUser</title>");            
            out.println("</head>");
            out.println("<body>");
            out.println("<a href='index.html'>index</a>");
            out.println("</body>");
            out.println("</html>");
        }
       
        
    }
    
    public boolean isLoginValid(String login, String mdp) {
        try(Connection conn = ds.getConnection()){
            Statement st = conn.createStatement();
            String query = "select * from Users where login = '" + login + 
                               "' and password = '" + mdp + "'";
            st.executeQuery(query);
            ResultSet res = st.getResultSet();
            if (res.next())
                if (res.getString("login").equals(login))
                    return true;
        }
        catch(SQLException e){
            System.out.println(e.toString());
        }
        return false;
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

}
