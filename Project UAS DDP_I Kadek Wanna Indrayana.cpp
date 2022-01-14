#include <iostream>
using namespace std;

int main(){
    int kelas, materi, pilihan1;
    float jarak, waktu, kecepatan, hasil1, hasil2, kedalaman;
    float tinggi, panjang, berat, gaya, gelombang, tiba;
    float celcius, fahrenheit, reamur, kelvin;
    string kembali[4]={"ingin menghitung ulang? ","1.iya","2.tidak","3.kembali ke awal"};
    char looping;
    cout<<"\t        Selamat Datang di"<<endl;
    cout<<"\tMesin Perhitungan Fisika Sederhana"<<endl;
    cout<<"\t=================================="<<endl;
    cout<<endl;
    awal:
    cout<<"=================================="<<endl;
    cout<<"Silahkan Pilih Materi Anda"<<endl;
    cout<<"1.rumus kecepatan\n2.rumus bidang miring\n3.konversi suhu\n4.rumus kedalaman"<<endl;
    cout<<"materi? ";
    cin>>materi;
    if (materi==1){
        
        kecepatan:
        cout<<"=================================="<<endl;
        cout<<"ingin mencari yang mana?"<<endl;
        cout<<"1.kecepatan (v)"<<endl;
	cout<<"2.jarak (s)"<<endl;
	cout<<"3.waktu (t)"<<endl;
	cout<<"pilihan anda? ";
	cin>>pilihan1;
	cout<<"=================================="<<endl;
		
		switch (pilihan1)
		{
		case 1:
		    cout<<"masukkan jarak dalam satuan (km): ";
		    cin>>jarak;
		    cout<<"masukkan waktu dalam satuan (jam): ";
		    cin>>waktu;
		    cout<<"rumus kecepatan (v= s/t)"<<endl;
		    hasil1=jarak/waktu;
		    hasil2=hasil1*1000/3600;
		    cout<<"hasil kecepatan (v)= "<<hasil1<<" km/jam atau ";
		    cout<<hasil2<<" m/s"<<endl;
		    break;
		case 2:
		    cout<<"masukkan kecepatan dalam satuan (km/jam): ";
		    cin>>kecepatan;
		    cout<<"masukkan waktu dalam satuan (jam): ";
		    cin>>waktu;
		    cout<<"rumus jarak (s= v*t)"<<endl;
		    hasil1=kecepatan*waktu;
		    hasil2=hasil1*1000;
		    cout<<"hasil jarak (s)= "<<hasil1<<" km atau ";
		    cout<<hasil2<<" m"<<endl;
		    break;
		case 3:
		    cout<<"masukkan jarak dalam satuan (km): ";
		    cin>>jarak;
		    cout<<"masukkan kecepatan dalam satuan (km/jam): ";
		    cin>>kecepatan;
		    cout<<"rumus waktu (t= s/v)"<<endl;
		    hasil1=jarak/kecepatan;
		    hasil2=hasil1*3600;
		    cout<<"hasil waktu (t)= "<<hasil1<<" jam atau ";
		    cout<<hasil2<<" sekon (s)"<<endl;
		    break;
		default:
		    cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		    break;
		}
	    ulang:
	        cout<<"=================================="<<endl;
	        for(int i=0;i<4;i++){
	           cout<<kembali[i]<<endl;
	        }
		   cin>>looping;
		    if (looping=='1'){
		        goto kecepatan;
		    }
		    else if (looping=='2'){
		        cout<<"=================================="<<endl;
		        cout<<"Terima kasih sudah menggunakan program kami"<<endl;
		        return 0;
		    }
		    else if (looping=='3'){
		        goto awal;
		    }
		    else {
		        cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		        goto ulang;
		    }
    }
    else if (materi==2){
    
        miring:
        cout<<"=================================="<<endl;
        cout<<"ingin mencari yang mana?"<<endl;
        cout<<"1.besar gaya (F)"<<endl;
	cout<<"2.panjang bidang miring (L)"<<endl;
	cout<<"3.tinggi bidang miring (h)"<<endl;
	cout<<"4.berat benda (w)"<<endl;
	cout<<"pilihan anda? ";
	cin>>pilihan1;
	cout<<"=================================="<<endl;
		
		switch(pilihan1)
		{
        	case 1:
            	    cout<<"masukkan tiggi bidang miring dalam satuan (m): ";
		    cin>>tinggi;
		    cout<<"masukkan panjang bidang miring dalam satuan (m): ";
		    cin>>panjang;
		    cout<<"masukkan berat dalam satuan (N): ";
		    cin>>berat;
		    cout<<"rumus besar gaya (F= h/L*w)"<<endl;
		    hasil1=tinggi/panjang*berat;
		    cout<<"besar gaya= "<<hasil1<<" N"<<endl;
		    break;
        	case 2:
            	    cout<<"masukkan tiggi bidang miring dalam satuan (m): ";
		    cin>>tinggi;
		    cout<<"masukkan besar gaya dalam satuan (N): ";
		    cin>>gaya;
		    cout<<"masukkan berat dalam satuan (N): ";
		    cin>>berat;
		    cout<<"rumus panjang bidang miring (L= w/F*h)"<<endl;
		    hasil1=berat/gaya*tinggi;
		    cout<<"panjang bidang miring (L)= "<<hasil1<<" m"<<endl;
		    break;
        	case 3:
            	    cout<<"masukkan besar gaya dalam satuan (N): ";
		    cin>>gaya;
		    cout<<"masukkan panjang bidang miring dalam satuan (m): ";
		    cin>>panjang;
		    cout<<"masukkan berat dalam satuan (N): ";
		    cin>>berat;
		    cout<<"rumus tinggi bidang miring (h= F/w*L)"<<endl;
		    hasil1=gaya/berat*panjang;
		    cout<<"tinggi bidang miring (h)= "<<hasil1<<" m"<<endl;
		    break;
        	case 4:
            	    cout<<"masukkan tiggi bidang miring dalam satuan (m): ";
		    cin>>tinggi;
		    cout<<"masukkan panjang bidang miring dalam satuan (m): ";
		    cin>>panjang;
		    cout<<"masukkan besar gaya dalam satuan (N): ";
		    cin>>gaya;
		    cout<<"rumus berat benda (w= L/h*F)"<<endl;
		    hasil1=panjang/tinggi*gaya;
		    cout<<"berat benda (w)= "<<hasil1<<" N"<<endl;
		    break;
		default:
		    cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		    break;
		}
		ulang1:
	        cout<<"=================================="<<endl;
	        for(int i=0;i<4;i++){
	           cout<<kembali[i]<<endl;
	        }
		   cin>>looping;
		    if (looping=='1'){
		        goto miring;
		    }
		    else if (looping=='2'){
		        cout<<"=================================="<<endl;
		        cout<<"Terima kasih sudah menggunakan program kami"<<endl;
		        return 0;
		    }
		    else if (looping=='3'){
		        goto awal;
		    }
		    else {
		        cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		        goto ulang1;
		    }
    }
    else if (materi==3){
        
        suhu:    
        cout<<"=================================="<<endl;
        cout<<"ingin mengkonversi yang mana?"<<endl;
        cout<<"1.celcius (C)"<<endl;
	cout<<"2.fahrenheit (F)"<<endl;
	cout<<"3.reamur (R)"<<endl;
	cout<<"4.kelvin (K)"<<endl;
	cout<<"pilihan anda? ";
	cin>>pilihan1;
	cout<<"=================================="<<endl;
		
		switch(pilihan1)
		{
        	case 1:
		    cout<<"masukkan nilai celcius: "<<endl;
		    cin>>celcius;
		    cout<<"rumus konversi ke fahrenheit (F= C*9/5+32)"<<endl;
		    cout<<"fahrenheit (F)= "<<celcius*1.8 + 32<<endl;
		    cout<<"rumus konversi ke reamur (R= C*4/5)"<<endl;
		    cout<<"reamur (R)= "<<celcius*0.8<<endl;
		    cout<<"rumus konfersi ke kelvin (K= C+273)"<<endl;
		    cout<<"kelvin (K)= "<<celcius + 273<<endl;
		    break;
		case 2:
		    cout<<"masukkan nilai fahrenheit: "<<endl;
		    cin>>fahrenheit;
		    cout<<"rumus konversi ke celcius (C= (F-32)*5/9)"<<endl;
		    cout<<"celcius (C)= "<<(fahrenheit - 32)/1.8<<endl;
		    cout<<"rumus konversi ke reamur (R= (F-32)*4/9)"<<endl;
		    cout<<"reamur (R)= "<<(fahrenheit - 32)/2.25<<endl;
		    cout<<"rumus konfersi ke kelvin (K= (F-32)*5/9+273"<<endl;
		    cout<<"kelvin (K)= "<<(fahrenheit - 32)*5/9 + 273<<endl;
		    break;
		case 3:
		    cout<<"masukkan nilai reamur: "<<endl;
		    cin>>reamur;
		    cout<<"rumus konversi ke fahrenheit (F= R*9/4+32)"<<endl;
		    cout<<"fahrenheit (F)= "<<reamur*2.25 + 32<<endl;
		    cout<<"rumus konversi ke celcius (C= R*5/4)"<<endl;
		    cout<<"celcius (C)= "<<reamur/0.8<<endl;
		    cout<<"rumus konfersi ke kelvin (K= R*5/4+273)"<<endl;
		    cout<<"kelvin (K)= "<<reamur/0.8 + 273<<endl;
		    break;
		case 4:
		    cout<<"masukkan nilai kelvin: "<<endl;
		    cin>>kelvin;
		    cout<<"rumus konversi ke fahrenheit (F= (K-273)*9/5+32"<<endl;
		    cout<<"fahrenheit (F)= "<<(kelvin - 273)*1.8 + 32<<endl;
		    cout<<"rumus konversi ke reamur (R= (K-273)*4/5)"<<endl;
		    cout<<"reamur (R)= "<<(kelvin - 273)*0.8<<endl;
		    cout<<"rumus konfersi ke celcius (C= K-273)"<<endl;
		    cout<<"kelvin (K)= "<<kelvin - 273<<endl;
		    break;
		default:
		    cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
			    break;
		}
		ulang2:
	        cout<<"=================================="<<endl;
	        for(int i=0;i<4;i++){
	           cout<<kembali[i]<<endl;
	        }
		   cin>>looping;
		    if (looping=='1'){
		        goto suhu;
		    }
		    else if (looping=='2'){
		        cout<<"=================================="<<endl;
		        cout<<"Terima kasih sudah menggunakan program kami"<<endl;
		        return 0;
		    }
		    else if (looping=='3'){
		        goto awal;
		    }
		    else {
		        cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		        goto ulang2;
		    }
    }
    else if (materi==4){

	kedalaman:
	cout<<"=================================="<<endl;
        cout<<"ingin mencari yang mana?"<<endl;
	cout<<"1.kedalaman (s)"<<endl;
	cout<<"2.kecepatan gelombang (v)"<<endl;
	cout<<"3.waktu gelombang tiba (t)"<<endl;
	cout<<"pilihan anda? ";
	cin>>pilihan1;
	cout<<"=================================="<<endl;

		switch(pilihan1)
		{
		case 1:
		    cout<<"masukkan kecepatan gelombang dalam satuan (m/s): ";
		    cin>>gelombang;
		    cout<<"masukkan waktu gelombang tiba dalam satuan (s): ";
		    cin>>tiba;
		    cout<<"rumus kedalaman (s= v*t/2)"<<endl;
		    hasil1=gelombang*tiba/2;
		    hasil2=hasil1/1000;
		    cout<<"kedalaman (s)= "<<hasil1<<" m atau ";
		    cout<<hasil2<<" km"<<endl;
		    break;
		case 2:
		    cout<<"masukkan kedalaman dalam satuan (m): ";
		    cin>>kedalaman;
		    cout<<"masukkan waktu gelombang tiba dalam satuan (s): ";
		    cin>>tiba;
		    cout<<"rumus kecepatan gelombang (v)= s*2/t)"<<endl;
		    hasil1=kedalaman*2/tiba;
		    cout<<"kecepatan gelombang (v)= "<<hasil1<<" m/s"<<endl;
		    break;
		case 3:
		    cout<<"masukkan kecepatan gelombang dalam satuan (m/s): ";
		    cin>>gelombang;
		    cout<<"masukkan kedalaman dalam satuan (m): ";
		    cin>>kedalaman;
		    cout<<"rumus waktu gelombang tiba (t)= s*2/v)"<<endl;
		    hasil1=kedalaman*2/gelombang;
		    cout<<"waktu gelombang tiba (v)= "<<hasil1<<" s"<<endl;
		    break;
		default:
            	    cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		    break;
		}
		ulang3:
	        cout<<"=================================="<<endl;
	        for(int i=0;i<4;i++){
	            cout<<kembali[i]<<endl;
	        }
		    cin>>looping;
		    if (looping=='1'){
		        goto kedalaman;
		    }
		    else if (looping=='2'){
		        cout<<"=================================="<<endl;
		        cout<<"Terima kasih sudah menggunakan program kami"<<endl;
		        return 0;
		    }
		    else if (looping=='3'){
		        goto awal;
		    }
		    else {
		        cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
		        goto ulang2;
		    }
    }
    else {
	cout<<"=================================="<<endl;
	cout<<"masih dalam tahap pengembangan, mohon tunggu update selanjutnya"<<endl;
	goto awal;
    }
}
