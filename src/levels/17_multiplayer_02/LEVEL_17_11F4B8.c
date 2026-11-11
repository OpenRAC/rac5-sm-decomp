/* LEVEL_17:0x11F4B8 -- placement copy of LEVEL_16_11FA90.c: classifies a name string: 0 plain word, 1 known name, 2 rejected. */
typedef struct Item {
    char name[0x5F8];
} Item;

typedef struct Table {
    int hdr;
    Item list[2];
} Table;

extern Table *D_001950B8;
extern int strcasecmp(const char *a, const char *b);

int func_11F4B8(char *s)
{
    int i;
    unsigned int len;
    unsigned char c;

    if (s == 0) {
        return 0;
    }
    if (s[0] == 0) {
        return 2;
    } else {
        for (i = 0; i < 2; i++) {
            if (strcasecmp(s, D_001950B8->list[i].name) == 0) {
                return 1;
            }
        }
        c = s[0];
        if ((unsigned int)(c - 0x61) < 0x1A || (unsigned int)(c - 0x41) < 0x1A) {
            for (len = 1; s[len] != 0; len++) {
            }
            if (len >= 3) {
                if (s[len - 1] != 0x20) {
                    return 0;
                }
            }
        }
        return 2;
    }
}
