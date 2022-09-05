#include <iostream>
#include <fstream>
#include <string>
#include <functional>
#include <algorithm>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

const string cookiejson = "cookie.json";
const string cookiejson2 = "cokie.json";
const string cookiejson3 = "cooke.json";

const string json = ".json";
const string txt = ".txt";

const string urlj = "LoginUrl";
const string urlt = "Url:";

const string mercur = "mercurial grabber";

string aaa;
string st;
string son2;
string st2;
string st3;

string username;
string password;
string loginst;

string a;
string pathr;
string pathu;
string path;

ifstream of2;
ifstream of;
ifstream oft;
ifstream oft2;

ifstream tur;

__int64 offset;   //size_t ile aynı olması için normal integer değil
__int64 offset2;
__int64 offset3;
__int64 offset5;
__int64 offset22;
__int64 offset33;
__int64 offset44;

__int64 offset_a;
__int64 offset_aa;

__int64 offseturlj;
__int64 offseturlt;

__int64 offsethazard1;
__int64 offsethazard2;

__int64 offsetmercurial;

__int64 async;
__int64 hazard;
__int64 mercurof;
__int64 mercurof1;

int sayac;
int sayacuser;
int sayacpass;
int bulunan;
int txtsayi;
int jsonsayi;

int secim;

int except;

bool valid = 1;
bool kelimevalid = 0;
bool logtxt = 0;

bool notcookie = 1;
bool logg;
bool date;

bool wide = false;

int turr;

ifstream asy;

void turbul() {
	asy.open(son2);
	while(getline(asy, st)) {
		if ((async = st.find(urlt)) != string::npos) {
			turr = 0;
			goto so;
		}
		else if ((hazard = st.find("Domain:")) != string::npos) {
			turr = 1;
			goto so;
		}
		else {
			if (st.length() == 51) {
				if ((mercurof1 = st.find("mercurial grabber")) != string::npos) {
					turr = 2;
					goto so;
				}
				else
				    goto so;
			}
			else {
				turr = 3;
				goto so;
			}
		}
	}
so:
	asy.close();
}

ifstream ifasync;
ifstream ifasync2;
void asyncc() {

	kelimevalid = 0;
	sayac = 0;
	sayacuser = 0;
	bulunan = 0;

	ifasync.open(son2);
	while (getline(ifasync, st)) {
		sayac++;
		if ((offset3 = st.find(aaa)) != string::npos) {
			bulunan = sayac;
			logtxt = 0;

			ifasync2.open(son2);
			while (getline(ifasync2, st)) {
				sayacuser++;

				if (sayacuser == bulunan) {	  // LOGINURL
					st2 = st;
				}

				// ---------------------------------------------------------------------------------

				if (sayacuser == bulunan + 1) {   // USERNAME
					if (st.length() > 10) {
						if (st[10] != '\0') {
							kelimevalid = 1;

							cout << "Username: ";
							for (int i = 10; i < st.length(); i++) {
								cout << st[i];
							}
							cout << endl << endl;
						}
					}
					else
						goto negative;
				}

				// ---------------------------------------------------------------------------------

				if (sayacuser == bulunan + 2) {   // PASSWORD

					if (st.length() > 10) {
						if (st[10] != '\0') {

							cout << "Password: ";

							for (int i = 10; i < st.length(); i++) {
								cout << st[i];
							}

							cout << endl << endl << "Login Url: ";

							for (int i = 0; i < st2.length(); i++) {
								if (st2[i] == ' ') {
									logtxt = true;
									i++;
								}
								if (logtxt) {
									cout << st2[i];
								}
							}

							cout << endl << endl << endl << endl;
						}
					}
				}

			}
			negative:
			sayacuser = 0;
			ifasync2.close();
			logtxt = 0;
		}
	}
	ifasync.close();

	sayac = 0;

	if (kelimevalid == 1) {
		cout << endl << endl << "Konum: " << son2 << endl << endl << endl;
		cout << "   --------------------------------------------------------------------------------------    " << endl << endl;
		txtsayi++;
	}
}


ifstream mercuri;
ifstream mercuri1;

void mercuria() {
	kelimevalid = 0;
	sayac = 0;
	sayacuser = 0;
	bulunan = 0;

	mercuri.open(son2);
	while (getline(mercuri, st)) {
		sayac++;

		if ((mercurof = st.find(aaa)) != string::npos) {

			bulunan = sayac;
			st2 = st;  //loginurl save to st2
			mercuri1.open(son2);

			while (getline(mercuri1, st)) {
				sayacuser++;
				if (sayacuser == bulunan + 1) {
					if (st.length() > 10) {
						if (st[10] != '\0') {

							username = st;

						}
						else
							goto negativ;
					}
					else
						goto negativ;
				}

				if (sayacuser == bulunan + 2) {
					if (st.length() > 10) {
						if (st[10] != '\0') {
							kelimevalid = true;

							password = st;

							cout << "Username: ";
							for (int i = 10; i < username.length(); i++) {
								cout << username[i];
							}
							cout << endl << endl << "Password: ";
							for (int i = 10; i < password.length(); i++) {
								cout << password[i];
							}
							cout << endl << endl << "Login Url: ";
							for (int i = 6; i < st2.length(); i++) {
								cout << st2[i];
							}
							cout << endl << endl << endl << endl;
						}
					}
				}
			}
			negativ:
			mercuri1.close();
			sayacuser = 0;


		}
	}
	mercuri.close();
	sayac = 0;
	if (kelimevalid) {
		cout << endl << endl << "Konum: " << son2 << endl << endl << endl;
		cout << "   --------------------------------------------------------------------------------------    " << endl << endl;
		txtsayi++;
	}
}

//HAZARD GRABBER
ifstream ifhazard;
ifstream ifhazard2;

void hazardd() {
	kelimevalid = 0;
	sayac = 0;
	sayacuser = 0;
	bulunan = 0;

	ifhazard.open(son2);
	while (getline(ifhazard, st)) {
		sayac++;

		if ((offsethazard1 = st.find(aaa)) != string::npos) {
			bulunan = sayac;

			ifhazard2.open(son2);

			while (getline(ifhazard2, st)) {

				sayacuser++;

				if (sayacuser == bulunan) {   //LOGINURL
					st2 = st;
				}

				if (sayacuser == bulunan + 1) {   //USERNAME
					if (st.length() > 6) {
						if (st[6] != '\0') {
							kelimevalid = true;

							cout << "Username: ";

							for (int i = 6; i < st.length(); i++) {
								cout << st[i];
							}
							cout << endl << endl;
						}
					}
				}

				if (sayacuser == bulunan + 2) {
					if (st.length() > 6) {
						if (st[6] != '\0') {

							cout << "Password: ";

							for (int i = 6; i < st.length(); i++) {
								cout << st[i];
							}
							cout << endl << endl << "Login Url: ";

							for (int i = 8; i < st2.length(); i++) {
								cout << st2[i];
							}
							cout << endl << endl << endl << endl;
						}
					}
				}

			}
			sayacuser = 0;
			ifhazard2.close();
		}
	}
	
	ifhazard.close();
	
	sayac = 0;
		if (kelimevalid == 1) {
		cout << endl << endl << "Konum: " << son2 << endl << endl << endl;
		cout << "   --------------------------------------------------------------------------------------    " << endl << endl;
		txtsayi++;
	}
}

void bultxt() {
	
	kelimevalid = 0;
	sayac = 0;
	sayacuser = 0;
	bulunan = 0;
	logtxt = 0;

	turbul();

	if (turr == 0) {

		asyncc();
	}
	else if (turr == 1) {
		hazardd();
	}
	else if (turr == 2) {
		mercuria();
	}
	else
		turr = 3;
}

void buljson() {
	notcookie = 1;
	if ((offset22 = son2.find(cookiejson, 0)) != string::npos) {
		notcookie = 0;
	}

	if ((offset33 = son2.find(cookiejson2, 0)) != string::npos) {
		notcookie = 0;
	}

	if ((offset44 = son2.find(cookiejson3, 0)) != string::npos) {
		notcookie = 0;
	}

	if (notcookie == 1) {

		kelimevalid = 0;
		sayac = 0;
		sayacuser = 0;
		bulunan = 0;
		of.open(son2);

		while (getline(of, st)) {

			logg = 0;
			sayac++;

			if (((offset = st.find(aaa)) != string::npos)&&((offseturlj=st.find(urlj))!=string::npos)) {


				bulunan = sayac;
				of2.open(son2);
				date = 0;
				while (getline(of2, st3)) {
					sayacuser++;
					
					// ---------------------------------------------------------------------------------

					if (sayacuser == (bulunan - 2)) {    // USERNAME

						if (st3.length() > 15) {

							if (st3[15] != '"') {								
								username = st3;
								kelimevalid = 1;
							}
						}
					}

					// ---------------------------------------------------------------------------------

					if (sayacuser == (bulunan - 1)) {    //PASSWORD
						if (st3.length() > 15) {
							if (st3[15] != '"') {
								password = st3;
							}
						}
					}

					// ---------------------------------------------------------------------------------

					if (sayacuser==bulunan){
						logg = 1;
						loginst = st3;					
					}

					// ---------------------------------------------------------------------------------

					if (((username.length() > 15) && (password.length() > 15))&&logg==1) {

						cout << "Username: ";

						for (int i = 0; i < ((username.length()) - 2); i++) {
							if (i > 14) {

								cout << username[i];
							}
						}
						cout << endl << endl << "Password: ";

						for (int i = 0; i < (password.length()) - 2; i++) {
							if (i > 14) {
								cout << password[i];
							}
						}
						cout << endl << endl << "Login Url: ";	

						for (int i = 0; i < (loginst.length()) - 2; i++) {
							if (i > 14) {
								cout << loginst[i];
							}
						}

						cout << endl << endl;
						username = ".";
						password = ".";
						logg = 0;
						date = 1;
					}

					if ((sayacuser == (bulunan + 1)) && (date == 1)) {
						cout << "Create Date: ";
						for (int i = 17; i < (st3.length()) - 1; i++) {
							cout << st3[i];
						}
						cout << endl << endl << endl << endl;
					}
		    	}

			sayacuser = 0;
			of2.close();	

			}
		}

		if (kelimevalid == 1) {
			cout << endl << endl << "Konum: " << son2 << endl << endl << endl;
			cout << "   --------------------------------------------------------------------------------------    " << endl << endl;
			jsonsayi++;
		}

		of.close();
	}
}

void onlytxt() {
	cout << "path: " << path << endl << endl << endl << endl;

	for (const auto& en : fs::directory_iterator(path, fs::directory_options::skip_permission_denied)) {
		if (secim == 1) {
			path = pathr;
		}
		else if (secim == 2) {
			path = pathu;
		}

		a = en.path().filename().string();

		try {
			if ((offset_aa = a.find(txt, 0)) != string::npos) {
				son2 = en.path().string();
				bultxt();
			}
			else {
				path = path + "\\" + a + "\\";
				if (filesystem::is_directory(path)) {
					try {
						for (const auto& aa : fs::directory_iterator(path, fs::directory_options::skip_permission_denied)) {
							wide = 0;
							for (auto ch : aa.path().wstring()) {
								if (ch > 0x7f) {
									wide = 1;
									break;
								}
							}

							if (!wide) {
								son2 = aa.path().string();

								if ((offset5 = son2.find(txt, 0)) != string::npos) {
									bultxt();
								}
							}
						}
					}

					catch (const std::filesystem::filesystem_error& exc) {
						cerr << "path1: " << exc.path1() << "\n";
						cerr << "path2: " << exc.path2() << "\n";
						cerr << exc.what() << endl;
					}

				}
			}
		}

		catch (const std::filesystem::filesystem_error& exc) {
			cerr << "path1: " << exc.path1() << "\n";
			cerr << "path2: " << exc.path2() << "\n";
			cerr << exc.what() << endl;
			except++;
		}

	}
}

void onlyjson() {

	cout << "path: " << path << endl << endl << endl << endl;

	for (const auto& en : fs::directory_iterator(path, fs::directory_options::skip_permission_denied)) {
		if (secim == 1) {
			path = pathr;
		}
		else if (secim == 2) {
			path = pathu;
		}

		a = en.path().filename().string();

		try {
			if ((offset_aa = a.find(json, 0)) != string::npos) {
				son2 = en.path().string();
				buljson();
			}
			else {
				path = path + "\\" + a + "\\";
				if (filesystem::is_directory(path)) {
					try {
						for (const auto& aa : fs::directory_iterator(path, fs::directory_options::skip_permission_denied)) {
							wide = 0;
							for (auto ch : aa.path().wstring()) {
								if (ch > 0x7f) {
									wide = 1;
									break;
								}
							}

							if (!wide) {
								son2 = aa.path().string();

								if ((offset5 = son2.find(json, 0)) != string::npos) {
									buljson();
								}
							}
						}
					}

					catch (const std::filesystem::filesystem_error& exc) {
						cerr << "path1: " << exc.path1() << "\n";
						cerr << "path2: " << exc.path2() << "\n";
						cerr << exc.what() << endl;
					}

				}
			}
		}

		catch (const std::filesystem::filesystem_error& exc) {
			cerr << "path1: " << exc.path1() << "\n";
			cerr << "path2: " << exc.path2() << "\n";
			cerr << exc.what() << endl;
			except++;
		}

	}

}

void dosyaoku(){
	cout << "path: " << path << endl << endl << endl << endl;

	for (const auto& en : fs::directory_iterator(path, fs::directory_options::skip_permission_denied)) {	
		{
			if (secim == 1) {				
				path = pathr;
			}
			else if (secim == 2) {
				path = pathu;
			}
		}

		a = en.path().filename().string();

		try {
			if ((offset_a = a.find(json, 0)) != string::npos) {
				son2 = en.path().string();
				buljson();
			}

			else if ((offset_aa = a.find(txt, 0)) != string::npos) {
				son2 = en.path().string();
				bultxt();
			}

			else {

				path = path + "\\" + a + "\\";
				if (filesystem::is_directory(path)) {

					try {
					
						for (const auto& aa : fs::directory_iterator(path, fs::directory_options::skip_permission_denied)) {
							wide = 0;
							for (auto ch : aa.path().wstring()) {  //UNICODE engellemesi
								if (ch > 0x7f) {
									wide = 1;
									break;
								}
							}

							if (!wide) {
								son2 = aa.path().string();

								if ((offset2 = son2.find(json, 0)) != string::npos) {
									buljson();
								}

								else if ((offset5 = son2.find(txt, 0)) != string::npos) {
									bultxt();
								}
							}
						}
					}

					catch (const std::filesystem::filesystem_error& exc) {
						cerr << "path1: " << exc.path1() << "\n";
						cerr << "path2: " << exc.path2() << "\n";
						cerr << exc.what() << endl;
					}

				}
			}
		}

		catch (const std::filesystem::filesystem_error& exc) {
			cerr << "path1: " << exc.path1() << "\n";
			cerr << "path2: " << exc.path2() << "\n";
			cerr << exc.what() << endl;
			except++;
		}

	}
}

int main() {

	int secim2;

	pathr=(filesystem::current_path().string());
	setlocale(LC_ALL, "Turkish");

sec: 
	cout << "1. Continue with current directory" << endl << endl << "2. Type in the directory" << endl << endl << ">> ";
	cin >> secim;

	switch (secim) {
	case 1:
		path = pathr;
		break;
	case 2:
		cout << endl << endl << "Directory >> ";
		cin >> pathu;
		path = pathu;
		break;
	default:
		cout << "Please enter a valid value" << endl << endl;
		goto sec;
		break;
	}

sec2:
	cout << "1. Kelimeyi JSON ve TXT dosyalarında ara" << endl << endl << "2. Kelimeyi sadece TXT dosyalarında ara" << endl << endl
		<< "3. Kelimeyi sadece JSON dosyalarında ara" << endl << endl << ">>";

	cin >> secim2;

	switch (secim2) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		cout << "Lütfen geçerli bir değer giriniz" << endl << endl;
		goto sec2;
		break;
	}

	cout << "URL'de aranacak kelimeyi giriniz" << endl << ">> ";
	cin >> aaa;
	cout << endl << endl;

	switch (secim2) {
	case 1:
		dosyaoku();
		break;
	case 2:
		onlytxt();
		break;
	case 3:
		onlyjson();
		break;
	default:
		cout << "Lütfen geçerli bir değer giriniz" << endl << endl;
		goto sec2;
		break;
	}


	if (of.is_open()) {
		of.close();
	}
	if (of2.is_open()) {
		of2.close();
	}
	if (oft.is_open()) {
		oft.close();
	}
	if (oft2.is_open()) {
		oft2.close();
	}

	cout << endl << endl << endl << endl << "Total numbers of JSON files including " << aaa << ": " << jsonsayi << endl << endl;
	cout << "Total numbers of TXT files including " << aaa << ": " << txtsayi << endl << endl;
	cout << "Total exceptions: " << except << endl << endl;

	system("pause");
}       