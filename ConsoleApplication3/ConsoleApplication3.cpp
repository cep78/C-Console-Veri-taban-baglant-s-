// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <iostream>
#include "Header.h"
#include "sql.h"
#include "sql2.h"
using namespace std;

int main()
{
	string resimid,farklinesne;
	//int resimyerid, kameraid, tespitedilenturid, tespitedilentursayisi, havadurumuid;
	//bool gunduzmu;
	string resimyerid, kameraid, tespitedilenturid, tespitedilentursayisi, havadurumuid;
	string gunduzmu,yuzvarmi;
	string tarih, saat;
	//2023-12-12' tarih formatý 
	//saat formati ise '12:30:15.1234567'

	resimid					= "100"; 
	farklinesne				= "Yok";
	resimyerid				= "1";
	kameraid				= "1";
	tespitedilenturid		= "1";
	havadurumuid			= "1";
	yuzvarmi				= "1";
	tespitedilentursayisi	= "10";
	gunduzmu				= "1";
	tarih					= "2023-05-21 03:30:15";


	std::wstring sqlsorgu = L"INSERT INTO Kayit(Resimid,ResimYerid,Kameraid,TespitEdilenTurid,TespitEdilenTurSayisi,YuzVarMi,FarkliNesne,GunduzMu,HavaDurumuid,TarihSaat) VALUES(";
	
	sqlsorgu = sqlsorgu +L"'"+ wstring (resimid.begin(), resimid.end()) + L"'" + L",";
	
	sqlsorgu = sqlsorgu + wstring(resimyerid.begin(), resimyerid.end()) + L",";

	sqlsorgu = sqlsorgu + wstring(kameraid.begin(), kameraid.end()) + L",";

	sqlsorgu = sqlsorgu + wstring(tespitedilenturid.begin(), tespitedilenturid.end()) + L",";

	sqlsorgu = sqlsorgu + wstring(tespitedilentursayisi.begin(), tespitedilentursayisi.end()) + L",";

	sqlsorgu = sqlsorgu + wstring(yuzvarmi.begin(), yuzvarmi.end()) + L",";

	sqlsorgu = sqlsorgu + L"'" + wstring(farklinesne.begin(), farklinesne.end()) + L"'" + L",";
	
	sqlsorgu = sqlsorgu + wstring(gunduzmu.begin(), gunduzmu.end()) + L",";

	sqlsorgu = sqlsorgu + wstring(havadurumuid.begin(), havadurumuid.end())+ L",";

	sqlsorgu = sqlsorgu + L"'" + wstring(tarih.begin(), tarih.end()) + L"'" ;

	sqlsorgu = sqlsorgu + +L")";
	
	//sqlsorgu = L"INSERT INTO TABLO(AD) VALUES('" + wstring(resimid.begin(), resimid.end()) + L"')";

	

	std::wstring yol = L"DRIVER={SQL Server};SERVER=.\\SQLEXPRESS;DATABASE=goruntu_isleme;Trusted=true";
	sqlbaglantiac(yol);
	
	sql_veriyaz(sqlsorgu);
	sqlsorgu = L"INSERT INTO TABLO(AD) VALUES('2-qwqw')";
	sql_veriyaz(sqlsorgu);
	sqlsorgu = L"INSERT INTO TABLO(AD) VALUES('3-qwqw')";
	sql_veriyaz(sqlsorgu);
	sqlsorgu = L"SELECT MAX(Resimid)  FROM Kayit ";
	sql_veriokusayisal(sqlsorgu);
	sqlbaglantikapat();
	sqlbaglantiac(yol);
	resimidolustur();
	sqlbaglantikapat();
	//sqlveriyaz(sqlsorgu,yol);
	cout << endl;
	printf("dasdasda");
	getchar();
    return 0;
}

