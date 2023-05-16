function countZeros(str){
    let count =0;
    let f =0;
    for(let i=0;i<str.length;i++){
        if(str[i]=='0')
        count++;
        if(str[i]>'1'){
            f=1;
            break;
        }
    }
    if(f)
    return "Invalid input";
    else
    return count;
}

console.log(countZeros("101012"));
console.log(countZeros("10101"));