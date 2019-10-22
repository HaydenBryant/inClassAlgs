// // Convert a string to spinal case. Spinal case is all-lowercase-words-joined-by-dashes.

function spinalCase(str) {
    var whiteSpace = /\s+|_+/g;

    str = str.replace(/([a-z])([A-Z])/g, '$1 $2');

    str = str.replace(whiteSpace, '-');

    return(str.toLowerCase());
}

// 24m40s06
// attempted it one way first. Couldnt get it going. Remembered using regex for it before so resolved it using that


// function spinalCase(str) {
//     str = str.split('');

//     for(var i = 0; i < str.length; i++){
//         if(str[i] === " " || str[i] === "_"){
//             str.replace(str[i], '-');
//         }
//         else if(str[i+1] === str[i+1].toUpperCase()){
//             str.splice(str[i], 0, '-');
//         }
//     }

//     str = str.join('').toLowerCase();

//     console.log(str);

// }

spinalCase('This Is Spinal Tap');
  