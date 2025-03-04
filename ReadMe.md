# HTML Basics

## 1. Anatomy of an HTML Document
An HTML document consists of various elements that define the structure and content of a webpage.

### Example:
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Basic HTML Structure</title>
</head>
<body>
    <h1>Welcome to My Webpage</h1>
    <p>This is a basic HTML document structure.</p>
</body>
</html>
```

## 2. Text Basics & Rules
HTML provides various elements to format and display text.

### Example:
```html
<p>This is a <strong>bold</strong> text.</p>
<p>This is an <em>italicized</em> text.</p>
<p>This is <u>underlined</u> text.</p>
<p>This is a <mark>highlighted</mark> text.</p>
```

## 3. Images and Multimedia
HTML allows embedding images, videos, and audio.

### Example:
```html
<img src="image.jpg" alt="Description of image" width="300" height="200">
<video width="320" height="240" controls>
    <source src="video.mp4" type="video/mp4">
</video>
```

## 4. Document Layout and Webs
HTML provides different elements to structure a webpage.

### Example:
```html
<header>
    <h1>My Website</h1>
</header>
<nav>
    <ul>
        <li><a href="#home">Home</a></li>
        <li><a href="#about">About</a></li>
        <li><a href="#contact">Contact</a></li>
    </ul>
</nav>
```

## 5. Formatted Lists
Lists help in organizing content.

### Example:
```html
<ol>
    <li>HTML</li>
    <li>CSS</li>
    <li>JavaScript</li>
</ol>
```

## 6. Cascading Style Sheets (CSS)
CSS is used to style HTML elements.

### Example:
```html
<p style="color: blue; font-size: 20px;">This is a styled paragraph.</p>
```

## 7. Forms
Forms collect user input.

### Example:
```html
<form action="submit.php" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name" required>
</form>
```

## 8. Tables
Tables display data in rows and columns.

### Example:
```html
<table border="1">
    <tr>
        <th>Name</th>
        <th>Age</th>
        <th>City</th>
    </tr>
    <tr>
        <td>Alice</td>
        <td>25</td>
        <td>New York</td>
    </tr>
</table>
```

## 9. Frames
Frames divide a page into multiple sections.

### Example:
```html
<iframe src="https://www.example.com" width="600" height="400"></iframe>
```

## 10. Executable Content
HTML supports JavaScript for interactive content.

### Example:
```html
<script>
    function greet() {
        alert("Hello, welcome to my site!");
    }
</script>
<button onclick="greet()">Click Me</button>
