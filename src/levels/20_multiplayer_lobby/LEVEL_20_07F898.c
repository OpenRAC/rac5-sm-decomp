typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0018E7E8[];
extern int func_07F998(Entry *entry);

int func_07F898(unsigned int index) {
    return func_07F998(&D_0018E7E8[index]);
}
