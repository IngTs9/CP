//Elimina 0 a la izquierda ejem: 00045 = 45
int pos = ans.find_first_not_of('0'); //llega hasta pos 3
ans = (pos == string::npos) ? "0" : ans.substr(pos);

