//Elimina 0 a la izquierda ejem: 00045 = 45//
int pos = ans.find_first_not_of('0'); //llega hasta pos 3
ans = (pos == string::npos) ? "0" : ans.substr(pos);
//Cadena en reversa//
string s = "abc";
reverse(s.begin(), s.end()); // "cba"
//Ordenar _ y si son anagramas//
string a = "roma", b = "amor";
sort(a.begin(), a.end());
sort(b.begin(), b.end());
if (a == b) cout << "anagramas";
//Frecuencias
vector<int> freq(26, 0);
for (char c : s)
    freq[c - 'a']++;
//permutaciones
string s = "abc";
sort(s.begin(), s.end());
do {
    cout << s << endl;
} while (next_permutation(s.begin(), s.end()));
