#include <MeMCore.h>

MeBuzzer buzzer;

enum Tone {
  // LOWER
  C_0 = 0,
  D_0 = 100,
  E_0 = 200,
  F_0 = 300,
  G_0 = 400,
  A_0 = 500,
  B_0 = 600,

  // MIDDLE
  C_1 = 700,
  D_1 = 800,
  E_1 = 900,
  F_1 = 1000,
  G_1 = 1100,
  A_1 = 1200,
  B_1 = 1300,

  // null
  NO_TONE = 9999
};

void setup() {
  Serial.begin(9600);

  // put your setup code here, to run once:
  Serial.println("Playing Scale");
  play_note(C_0, 100);
  play_note(NO_TONE, 100);
  play_note(D_0, 100);
  play_note(NO_TONE, 100);
  play_note(E_0, 100);
  play_note(NO_TONE, 100);
  play_note(F_0, 100);
  play_note(NO_TONE, 100);
  play_note(G_0, 100);
  play_note(NO_TONE, 100);
  play_note(A_0, 100);
  play_note(NO_TONE, 100);
  play_note(B_0, 100);
  play_note(NO_TONE, 100);

  play_note(C_1, 100);
  play_note(NO_TONE, 100);
  play_note(D_1, 100);
  play_note(NO_TONE, 100);
  play_note(E_1, 100);
  play_note(NO_TONE, 100);
  play_note(F_1, 100);
  play_note(NO_TONE, 100);
  play_note(G_1, 100);
  play_note(NO_TONE, 100);
  play_note(A_1, 100);
  play_note(NO_TONE, 100);
  play_note(B_1, 100);
  play_note(NO_TONE, 100);
  delay(1000);

  // mary had a little lamb
  Serial.println("Playing Moonlight Sonata");
  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);

  play_note(G_0, 400);
  play_note(C_1, 400);
  play_note(E_1, 400);
}

void play_note(Tone tone, int duration) {
  if (tone == NO_TONE) {
    delay(duration);
  } else {
    buzzer.tone(tone, duration);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello");
}
