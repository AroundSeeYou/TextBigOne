<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
用户名:<%=request.getAttribute("username") %><br>
	密    码:<%=request.getAttribute("password") %>
</body>
</html>