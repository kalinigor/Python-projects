int main(){
    //Alocira jednu adresu na stack-u.
    int i = 1;
    //Alocira drugu adresu na stacku.
    int j = 2;
    //Alocira pet adresa na stack-u,
    //Ovde imamo overflow tj. compile time error
    char s[5] = "abcdefghi";
    //Alocira 5 adresa na stacku
    char t[5] = "j";
    //U pokazivac 'p' stavljamo adresu 'i' pomerenu za 1. Adresa ce da se pomeri za 4 bytea.
    int *p = &i + 1;
    //U pokazivac 'q' stavljamo drugu adresu iz niza 's'.
    char *q = s + 1;

    //Tumacimo da je adresa 'i' + 1 zapravo 'j' posto je prvi sledeci upis na stack
    //i da posto 't' pocinje posle petog elementa 's' upis u prvu adresu 't' ce pregaziti karakter f->j u tom stringu.
    //Output se tumaci kao "2bcdej"
    printf("%d %s", *p, q);
    
    }