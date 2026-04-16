// Reiniciar un vector dinamico
fill(vec.begin(), vec.end(), 0); 
// tambien: fill(all(vec), 0);  // si tienes macro all

// Reiniciar un arreglo estático
memset(vec, 0, sizeof(vec)); 
// solo usar con 0 o -1 (NO usar con 1 en int)

//creacion de vectores dinamicos
vector<int>vec
vector<pair<int,int>vec;
vector<vector<int,int>mat;

vec.push_back(); //Insertar un elemento al final
vec.pop_back(); //elimina el ultimo elemento
vec.empty(); //Retorna true si el vector esta vacio
vec.clear(); //Elimina todo los elementos del vector
vec.at(i); //Devuelve el valor que esta en esa posicion
vec.front(); //devuelve el primer valor
vec.back(); //devuelve el ultimo valor 
vec.insert(pos, val); // inserta un valor en una posicion espeficica
vec.erase(vec.begin() + pos); //elimina un elemento de una posicion especifica
  //"vec.erase(vec.begin()+i)" y el for "for(int i = 0; i < sz(vec);)" si no se pone asi da error :(
vec.erase(star,end); //elimina los elementos de ese rango
vec.resize(n); //cambia el tamanio del vector a n elementos
vec.assign(n,val); //Asigna n elementos con valor val
vec.swap(otrovec); //Intercambia el contenido con el otrovec
begin()/end() // retorna los iteradores del inicio y final
rbegin()/rend() //Iteradores al inverso, para recorrer de atras hacia adelante
vec.emplace(pos,arg); //inserta una posicion y un valor
vec.emplace_back(); //Inserta valores al final, creando posiciones para este


