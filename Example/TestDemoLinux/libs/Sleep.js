function sleep(ms) {
    var start=new Date().getTime();
    
    while(true) if(new Date().getTime() - start > ms) break;
}