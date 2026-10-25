/* LEVEL_15:0x011840 -- vide l'etat du minuteur partage : quatre enregistrements
   de trois mots remis a zero dans une boucle, puis l'indice et la duree. */

typedef struct {
    int w0;
    int w1;
    int w2;
} Rec;

typedef struct {
    Rec a[2];
    Rec b[2];
    char pad[0x160 - 0x30];
    int f_160;
    float f_164;
} Ctx;

extern Ctx D_1776F0;
extern void func_011788(void);

void func_011840(void)
{
    unsigned int i;

    D_1776F0.f_164 = 1.0f;
    D_1776F0.f_160 = 0;
    for (i = 0; i < 2; i++) {
        D_1776F0.a[i].w0 = 0;
        D_1776F0.a[i].w1 = 0;
        D_1776F0.a[i].w2 = 0;
        D_1776F0.b[i].w0 = 0;
        D_1776F0.b[i].w1 = 0;
        D_1776F0.b[i].w2 = 0;
    }
    func_011788();
}
