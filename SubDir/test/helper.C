namespace {
  int loadMyLibraryTriggerFunc() {
    gSystem->Load("libROOTABITESTSubDir.so");
    return 0;
  }
  int loadMyLibraryTrigger = loadMyLibraryTriggerFunc();
}
