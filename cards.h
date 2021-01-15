#define ControlCardsARRAYSIZE 2
String ControlCards[ControlCardsARRAYSIZE] = { "907221814","1161788653"}; //two volume cards


// vol,stop/start
//#define TrackCardsARRAYSIZE 4
//String TrackCards[TrackCardsARRAYSIZE] = { "212106553","36205853","1161788653","521088853"};
#define TrackCardsARRAYSIZE 32
String TrackCards[TrackCardsARRAYSIZE] = {
"36205853",
"212106553",
"196918853",
"2121016653",
"4419016292100129",
"4611728293100129",
"6812652",
"4498617092100128",
"4342235893100129",//
"nocard",
"1061359426",
"42228293100129",
"412917420292100129",
"414653493100132",
"1642242852",
"491295893100128",
"41218317092100128",
"42081325893100128",
"1002089453",
"521088853",
"4935612293100129",//21
"41272005893100128",
"41891755893100128",
"TRACKNOCARD",
"412385093100129",
"42144010693100128",
"NOCARD2",
"42444912293100128",
"49124821092100128",
"6814010953",
"422938293100128",
"49511311493100128"
};


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
