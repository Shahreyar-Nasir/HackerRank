string timeConversion(string s) {
   string p = s.substr(8,2);
   int hour = stoi(s.substr(0,2));
   string minandsec = s.substr(2,6);
   if (p == "AM") {
        if (hour == 12) hour = 0; 
    } else {
        if (hour != 12) hour += 12; 
    }
    string hour24h = (hour < 10 ? "0" : "") + to_string(hour);
    return hour24h + minandsec;
}
