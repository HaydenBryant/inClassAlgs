function orbitalPeriod(arr) {
    var output = [];
    var GM = 398600.4418;
    var earthRadius = 6367.4447;

    arr.forEach(obj => {
        var orbPeriod = Math.round((2 * Math.PI) * Math.sqrt(Math.pow(earthRadius + obj.avgAlt, 3) / GM));

        output.push({
            name: obj.name,
            orbitalPeriod: orbPeriod
        });
    });
        
    return(output);
  }
  
  orbitalPeriod([{name : "sputnik", avgAlt : 35873.5553}]);
  