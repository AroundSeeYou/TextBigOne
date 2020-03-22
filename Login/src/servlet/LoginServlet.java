package servlet;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class LoginServlet
 */
//@WebServlet("/LoginServlet")
public class LoginServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
    /**
     * @see HttpServlet#HttpServlet()
     */
    public LoginServlet() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		System.out.println(username);
		System.out.println(password);
		response.setCharacterEncoding("gbk");
		
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		response.getWriter().append("登陆成功！\n");
		response.getWriter().append("账号: ").append(username);
		response.getWriter().append("\n密码: ").append(password);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=utf-8");
		request.setCharacterEncoding("utf-8");
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		System.out.println(username);
		System.out.println(password);
		
		/*response.getWriter().append("登陆成功！<br>");
		response.getWriter().append("账号: ").append(username);
		response.getWriter().append("<br>密码: ").append(password);*/
		
		request.setAttribute("username", username);
		request.setAttribute("password", password);
		request.getRequestDispatcher("login_data.jsp").forward(request, response);
		
	}

}