typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B128[];
extern int func_094B30(Entry *entry);

int func_094A30(unsigned int index) {
    return func_094B30(&D_0026B128[index]);
}
