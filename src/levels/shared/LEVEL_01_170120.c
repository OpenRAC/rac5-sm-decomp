/* LEVEL_01:0x170120 -- un echantillon recopie dans le noeud suivant,
   puis un drapeau ecrit dans ce meme noeud. */
typedef struct {
    float f[2];
    float g[2];
    int   n;
} Sample;

typedef struct {
    char   pad00[0x1C];
    Sample s;
    char   pad30[0x28];
    int    flag;
} Thing;

typedef struct {
    char   pad00[0x58];
    Thing *next;
} Node;

void func_170120(Node *node, Sample *src, int value)
{
    Thing *thing = node->next;

    thing->s = *src;
    thing->flag = value;
}
