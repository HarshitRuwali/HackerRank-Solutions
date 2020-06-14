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

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    var vowels=['a','e','i','o','u']
    for (var i=0; i< s.length; i++)
    {
        if (vowels.indexOf(s[i])>-1)
        {
            console.log(s[i]);
        }
    }
    for (var j=0; j<s.length; j++)
    {
        if (vowels.indexOf(s[j])<0)
        {
            console.log(s[j]);
        }
    }
}

