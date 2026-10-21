/* LEVEL_02:0x095A50 -- un lot de tris alpha est enregistre :
   un echantillon de seize flottants et quatre indices. */
typedef struct {
    float f[16];
} Floats;

typedef struct {
    char         pad000[0x40];
    Floats       v;
    int          count;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    char         pad087[9];
} Entry;

extern Entry D_0025F560[];
extern unsigned int   g_ALPHASORT_nBatchesToRender;
extern unsigned char g_ALPHASORT_CurrentView;

void func_095A50(Floats *src, int index, unsigned char a, unsigned char b,
                 unsigned char view)
{
    Entry *entry;
    unsigned int count = g_ALPHASORT_nBatchesToRender;

    if (count >= 0x200)
        return;

    if (view == 0xFF)
        view = g_ALPHASORT_CurrentView;

    entry = &D_0025F560[count];

    entry->count = index;
    entry->a = a;
    entry->b = b;
    entry->c = view;
    entry->v = *src;

    g_ALPHASORT_nBatchesToRender = count + 1;
}
