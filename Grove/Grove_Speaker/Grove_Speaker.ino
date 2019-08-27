#define SPEAKER 3
// On va brancher le haut parleur sur D3

// Voici un tableau de toutes les fréquences des notes qu'on va jouer
int notes[]={1911,1702,1516,1431,1275,1136,1012};


void setup()
{
    pinMode(SPEAKER,OUTPUT);
    digitalWrite(SPEAKER,LOW);
}

void loop()
{
    // L'index parcoure toutes les notes du tableau entre la 0ième et la 7ième
    for(int note_index=0; note_index<7; note_index++)
    {
        sound(note_index); // Cette fonction joue la note à cet index
        delay(500);
    }
}

void sound(uint8_t note_index)
{
    for(int i=0;i<100;i++)
    {
        digitalWrite(SPEAKER, HIGH);
        delayMicroseconds(notes[note_index]);
        digitalWrite(SPEAKER, LOW);
        delayMicroseconds(notes[note_index]);
    }
}

