/* LEVEL_19:0x0A10F0 -- publie une valeur dans le champ +0x14 de la
   i-ieme entree (32 octets) d'une table globale. */

typedef struct {
    int p00;
    int p04;
    int p08;
    int p0C;
    int p10;
    float f14;
    int p18;
    int p1C;
} Ent;

extern Ent D_00275EA8[];

void func_0A10F0(int i, float v)
{
    D_00275EA8[i].f14 = v;
}
