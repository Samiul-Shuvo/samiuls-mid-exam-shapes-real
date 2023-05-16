function tempertureConverter(temp)
{
    temp = parseFloat(temp);
    var calsius = (temp - 32);
    if(calsius % 1.8 == 0)
    {
        calsius = (temp - 32) / 1.8;
        console.log(calsius.toFixed(2));
    }
    else
    {
        calsius = parseInt(calsius);
        calsius = (temp - 32) / 1.8;
        console.log(calsius.toFixed(2));
    }
    return tempertureConverter;
}

tempertureConverter(50);
tempertureConverter(103);