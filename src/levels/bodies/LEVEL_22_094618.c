typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_00209018[];
extern int func_094718(Entry *entry);

int func_094618(unsigned int index) {
    return func_094718(&D_00209018[index]);
}
