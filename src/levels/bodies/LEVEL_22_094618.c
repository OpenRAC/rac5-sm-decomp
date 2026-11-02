typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_00209018[];
extern void func_094718(Entry *entry);

void func_094618(unsigned int index) {
    func_094718(&D_00209018[index]);
}
