extern unsigned int gMeshResourceHandleCount; /* 0x01EF5818 */

unsigned int GDEMESH_GetFreeMeshResourceHandle__Fv(void) {
    unsigned int handle = gMeshResourceHandleCount;

    if (handle < 0x100) {
        gMeshResourceHandleCount = handle + 1;
        return handle;
    }
    return 0xFFFFFFFF;
}
