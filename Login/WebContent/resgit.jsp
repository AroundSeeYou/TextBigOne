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
	年龄:<%=request.getAttribute("age") %><br>
	性别:<%=request.getAttribute("sex") %><br>
	email:<%=request.getAttribute("email") %>
</body>
</html>