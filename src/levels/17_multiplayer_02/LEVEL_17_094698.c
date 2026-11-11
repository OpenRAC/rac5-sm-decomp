typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0025C2A8[];
extern int func_094798(Entry *entry);

int func_094698(unsigned int index) {
    return func_094798(&D_0025C2A8[index]);
}
