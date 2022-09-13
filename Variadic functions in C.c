int  sum (int count,...) {
    va_list args;
    int i, summary;
    
    va_start(args, count);
    for(i=0; i<count; i++){
        summary += va_arg(args, int);
    }
    va_end(args);
    return summary;
}

int min(int count,...) {
    va_list args;
    int i, minima = 999999, current;
    
    va_start(args, count);
    for(i=0; i<count; i++){
        current = va_arg(args, int);
        if(minima>current){
            minima = current;
        }
    }
    va_end(args);
    return minima;
}

int max(int count,...) {
    va_list args;
    int i, maxima = 0, current;
    
    va_start(args, count);
    for(i=0; i<count; i++){
        current = va_arg(args, int);
        if(maxima<current){
            maxima = current;
        }
    }
    va_end(args);
    return maxima;
}
