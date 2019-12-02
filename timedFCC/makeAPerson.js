var Person = function(firstAndLast) {
    // Complete the method below and implement the others similarly
    var fullName = firstAndLast.split(" ");

    this.getFullName = function() {
      return fullName.join(" ");
    };
    this.getFirstName = function() {
        return fullName[0];
    }
    this.getLastName = function() {
        return fullName[1];
    }
    this.setFirstName = function(first) {
        fullName[0] = first;
    }
    this.setLastName = function(last) {
        fullName[1] = last;
    }
    this.setFullName = function(firstAndLast) {
        fullName[0] = firstAndLast.split(" ")[0];
        fullName[1] = firstAndLast.split(" ")[1];
    }
  };
  
  var bob = new Person('Bob Ross');