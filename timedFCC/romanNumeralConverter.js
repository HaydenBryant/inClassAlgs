function convertToRoman(num) {
    var romans = [["I", "V"], ["X", "L"], ["C", "D"], ["M"]];

    var numString = num.toString();

    var romanString = '';

    for(var i = 0; i < numString.length; i++){
        if(i === 0){
            romanString += romans[0]
        }
        else if(i === 1){

        }
        else if(i === 2){

        }
        else if(i === 3){

        }
        else if(i === 4){

        }
        else{
            console.log("error");
        }
    }


    return num;
   }
   
   convertToRoman(36);
   