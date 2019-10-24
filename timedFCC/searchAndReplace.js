// Perform a search and replace on the sentence using the arguments provided and return the new sentence.

// First argument is the sentence to perform the search and replace on.

// Second argument is the word that you will be replacing (before).

// Third argument is what you will be replacing the second argument with (after).

// Note
// Preserve the case of the first character in the original word when you are replacing it. For example if you mean to replace the word "Book" with the word "dog", it should be replaced as "Dog"

function myReplace(str, before, after) {
    str = str.split(' ');

    for(var i = 0; i < str.length; i++){
        if(str[i] === before){
            if(str[i].charAt(0) === str[i].charAt(0).toUpperCase()){
                after = after.charAt(0).toUpperCase() + after.slice(1);
            }
            str.splice(i, 1, after);
        }
    }
    return(str.join(' '));
  }
  
  myReplace("He is Sleeping on the couch", "Sleeping", "sitting");

//   16m28s42