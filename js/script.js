const valid = () => {
   const a = parseInt(document.getElementById('side1').value);
   const b = parseInt(document.getElementById('side2').value);
   const c = parseInt(document.getElementById('side3').value);
 

   if (a + b > c && a + c > b && b + c > a) {
       document.getElementById('mid-msg').innerHTML="Valid Triangle";
       if(a==b && b==c) {
        document.getElementById('equi').style.backgroundColor="#00AA00";
        document.getElementById('equi').style.boxShadow="0px 0px 10px 5px rgba(0, 255, 0, 0.4)";
        document.getElementById('equi').style.border="3px solid rgba(0, 120, 0, 1)";
    } else if (a==b || b==c || c==a) {
        document.getElementById('isosceles').style.backgroundColor="#00AA00";
        document.getElementById('isosceles').style.boxShadow="0px 0px 10px 5px rgba(0, 255, 0, 0.4)";
        document.getElementById('isosceles').style.border="3px solid rgba(0, 120, 0, 1)";
       
    }else {
        document.getElementById('scalene').style.backgroundColor="#00AA00";
        document.getElementById('scalene').style.boxShadow="0px 0px 10px 5px rgba(0, 255, 0, 0.4)";
        document.getElementById('scalene').style.border="3px solid rgba(0, 120, 0, 1)";
    }
    
   }
   else {
        document.getElementById('mid-msg').style.color="#e8615a";
        document.getElementById('mid-msg').style.textShadow="-9px -6px 40px #af1b19";
        document.getElementById('mid-msg').innerHTML="Not a valid Triangle";
   }
};