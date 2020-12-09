#define ControlCardsARRAYSIZE 1
String ControlCards[ControlCardsARRAYSIZE] = { "196918853"};


// vol,stop/start
#define TrackCardsARRAYSIZE 4
String TrackCards[TrackCardsARRAYSIZE] = { "212106553","36205853","1161788653","521088853"};

//Check if touched card is a contol card
int isControlCard(String UID) {
  for (int x = 0; x < ControlCardsARRAYSIZE; x++) {
    if (ControlCards[x] == UID) {
      return x;
    }
  } return -1;
}

//Check if touched card is a track card
int isTrackCard(String UID) {
  for (int x = 0; x < TrackCardsARRAYSIZE; x++) {
    if (TrackCards[x] == UID) {
      return x+1;
    }
  } return -1;
}
