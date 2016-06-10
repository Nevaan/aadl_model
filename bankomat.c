#include <stdio.h>

/* DaneBankowe dane_bankowe; */
char wybrana_opcja;
int stan_sejfu;

String get_content();
String send_text();
void read_key_input(char keyboard_in);
bool wydaj_kwote(int kwota);
int pobierz_stan_konta();
void wplata_gotowki(int kwota);
void wyplata_gotowki(int kwota);
void czytaj_karte();
void wydaj_karte();
void get_dane_konta();
void send_dane_karty();

String get_content() {
	// wyslij dane do wyswietlenia - odpowiedni ekran
	return content;
};

String send_text(){
	// wyslij text do wydrukowania - raport transakcji
	return data;
};

void read_key_input(char keyboard_in){
	// podejmij odpowiednia akcje w zaleznosci od inputu
}

bool wydaj_kwote(int kwota) {
	if (stan_sejfu >= kwota){
		// sygna³ do sejfu - przekaz okreslona kwote do modulu gotowkowego
		return true;
	} else {
		return false;
	}
}

int pobierz_stan_konta() {
	return stan_sejfu;
};


void wplata_gotowki(int kwota){
	//sygnal do modulu gotowkowego - otworz i pobierz banknoty
};

void wyplata_gotowki(int kwota){
	//sygnal do modulu gotowkowego - otworz i wydaj banknoty
};

void czytaj_karte(){ 
	//odczytaj dane karty
	send_dane_karty();
};


void wydaj_karte(){
	// sygnal do czytnika - wydaj karte
};

/*DaneBankowe */ get_dane_konta(){
	/* return dane_bankowe; */
};

void send_dane_karty(){
	// wyslij request o dane bankowe - autoryzacja
	// dane_bankowe = response;
};