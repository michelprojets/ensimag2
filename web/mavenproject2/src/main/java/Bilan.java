import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.*;

@WebServlet(name = "Bilan", urlPatterns = {"/bilan"})
public class Bilan extends HttpServlet {

    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        
        /* Récupération de la valeur du cookie nommé "utilisateur" */
        /*
        Cookie[] cookies = request.getCookies();
        String name = null;
        */
        /* S’il n’y a pas de cookie, on a null et non un tableau vide... */
        /*
        if (cookies != null) {
            for (Cookie c : cookies) {
                if (c.getName().equals("utilisateur")) {
                    name = c.getValue();
                    break;
                }
            }
        }
        */
        
       HttpSession session = request.getSession();
       String name = (String) session.getAttribute("utilisateur");
        if (name != null) {
           
                /* Envoi de la réponse */
            response.setContentType("text/html;charset=UTF-8");
            try (PrintWriter out = response.getWriter()) {
                out.println("<!DOCTYPE html>");
                out.println("<html>");
                out.println("<head>");
                out.println("<link rel='stylesheet' type='text/css' href='styles.css' />");
                out.println("<title>Bilan des emprunts</title>");
                out.println("</head>");            
                out.println("<body>");
                if (name != null) {
                    out.println("Liste des emprunts de " + name);
                    out.println("<ul>");
                    out.println("<li><span>Les Travailleurs de la Mer</span>, Victor Hugo</li>");
                    out.println("<li><span>CSS 2 - Pratique du design web</span>, Raphaël Goetter</li>");
                    out.println("<li><span>The C++ Programming Language</span>, Bjarne Stroustrup</li>");
                    out.println("</ul>");
                } else {
                    out.println("Veuillez vous <a href='login.html'>connecter</a> pour pouvoir consulter le bilan de vos emprunts.");
                }
                out.println("</body>");
                out.println("</html>");   
            }
            
        } else {
           response.sendRedirect("login.html");
        }   
        
        
    }
}
