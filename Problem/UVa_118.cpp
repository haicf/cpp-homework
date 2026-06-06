 #include <iostream>
 #include <algorithm>
 using namespace std;

 int main (){
    int X,Y;
    cin>>X>>Y;

    bool scent[51][51] = {false};
    int x,y;
    char direction;
    string cmd; //L, R, F

    while (cin>>x>>y>>direction>>cmd){
      // ubah arah menjadi angka
      int d;
      if (direction == 'N') d = 0;
      else if (direction == 'E') d = 1;
      else if (direction == 'S') d = 2;
      else d = 3;

      // 4 karena arahnya cuman ada 4 (N,E, S, W)
      int dx[4] = {0,1,0,-1}; 
      int dy[4] = {1,0,-1,0}; 

      bool lost = false; //anggap belum jatuh
      for (char c : cmd){ // sama dengan for (int i = 0; i < cmd.size(); i++){ cahr = cmd[i]}
        if (c == 'L'){ 
          // dari north ke kiri = west, N = 0 ke kiri (W) = 3
          d = (d + 3) % 4; //mod 4 karena total 4 arah
        } else if (c == 'R'){
          d = (d + 1) % 4;
        } else { // Forward
          int nx = x + dx[d];
          int ny = y + dy[d];

          if (nx < 0 || nx > X || ny < 0 || ny > Y){
            if (scent[x][y]) continue; // continue artinya lanjut ke next command
            scent[x][y] = true; // robot melewati batas
            lost = true; // robot hilang
            break; // robot mati jadi gak bisa ikutin command selanjutnya lagi
          }

          //posisi grid jadi ke titik yang selanjutnya
          x = nx;
          y = ny;
        }
      }
   
      cout << x << " " << y << " ";
      if (d == 0){
       cout << "N";
      } else if (d == 1){
       cout << "E";
      } else if (d == 2){
        cout << "S";
      } else { 
        cout << "W";
      }

      if (lost) cout << " LOST";
      cout << endl;
    }
    return 0;
 }
