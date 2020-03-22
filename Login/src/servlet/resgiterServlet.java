package servlet;

import java.io.IOException;

import javax.servlet.ServletConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class resgiterServlet
 */
//@WebServlet("/resgiterServlet")
public class resgiterServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public resgiterServlet() {
    	 System.out.println("resgiterServlet  ... create");
        
    }
  
    @Override
    public void destroy() {
    	// TODO Auto-generated method stub
    	System.out.println("resgiterServlet destory ...");
    }
    @Override
    public void init(ServletConfig config) throws ServletException {
    	// TODO Auto-generated method stub
    	System.out.println("resgiterServlet init ...");
    	System.out.println(config.getInitParameter("app"));
    }
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		ServletContext sc= request.getServletContext();
		if(sc.getAttribute("count")!=null) {
			int count=(int) sc.getAttribute("count");	
			sc.setAttribute("count", count+1);
		}
		else
			sc.setAttribute("count",1);
	}
	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.setContentType("text/html;charset=utf-8");
		request.setCharacterEncoding("utf-8");
		String username = request.getParameter("username");
		String age = request.getParameter("age");
		String sex = request.getParameter("sex");
		
		String email = request.getParameter("email");
		System.out.println(username);
		System.out.println(age);
		System.out.println(sex);
		System.out.println(email);
		request.setAttribute("username", username);
		request.setAttribute("age", age);
		request.setAttribute("sex", sex);
		request.setAttribute("email", email);
		//request.getRequestDispatcher("resgit.jsp").forward(request, response);
		response.sendRedirect("resgit.jsp");//重定向
	}

}