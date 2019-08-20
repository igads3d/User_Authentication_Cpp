# User Authentication Project <br/>

- _created by_ [Tamás Németh](https://www.linkedin.com/in/tam%C3%A1s-n%C3%A9meth-793459161/) <br/>
- _gitHub:_ [ithomas91](https://github.com/ithomas91) <br/>
- _used technology:_ [C++14](https://en.wikipedia.org/wiki/C%2B%2B14) <br/>
- _used compiler:_ [CLion by JetBrains](https://www.jetbrains.com/clion/download) <br/>
- _database engine:_ [SQLite3](https://www.sqlite.org/index.html) <br/>

## Project documentation <br/>

User Authentication project dreamed by me. I used c++ programming language, due to my knowledge.
The program has to be run by compiler. It has got database which store Users data.
<br/>

`NOTE: ALL USER DATA IN DATABASE ARE FAKE!`

<br/>

## List of available features with examples

<br/>

- ### At the beginning, the User can go 2 different ways, 'login' or 'registration'.<br/>

<img src="img/firstpage.png" alt="firstpage" width="500" height="300">
<img src="img/mainSwitchCase.png" alt="main" width="500" height="300"> 
 
 <br/>
  
- ### At the 'login' feature prompt the User to enter 'Username' and 'Password', and looking for a match in database. If the entered details are matching, all User data are show up.

<br/>

<img src="img/login.png" alt="login" width="500" height="300">
<img src="img/loggedin.png" alt="loggedin" width="700" height="300">
<br/>

- ### At the 'register' feature prompt the User to enter 'First name', 'Last name', 'Username', 'E-mail address', 'Password' and 'Confirm password'.

<br/>

There are some criterion to register:<br/>

- username has to be unique, contain one number at least<br/>
- e-mail address formal has to be followed<br/>
- password has to contain at least one uppercase letter, and one number<br/>
- user has to confirm the password<br/>
<br/>

<img src="img/register.png" alt="register" width="500" height="300">
`NOTE: ALL USER DATA IN DATABASE ARE FAKE!`
<img src="img/database.png" alt="database" width="500" height="300">
<br/>

### If a condition isn't met, the program drops the user to the beginning of the registration.
<br/>
