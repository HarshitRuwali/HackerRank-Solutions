'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}
function getMaxLessThanK(n, k) {

    var mx = -1;

    for(var i=1; i<=n; i++){
        for(var j=i+1; j<=n; j++){
            var res = i & j;
            if(res > mx && res < k){
                mx = res;
            }
        }
    }
    return mx;

};
