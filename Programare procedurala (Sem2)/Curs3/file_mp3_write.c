//gcc -Wall file_mp3_write.c -o file_mp3_write

#include <stdio.h>
#include <string.h>

int main()
{
  char title[31] = "";
  char artist[31] = "";
  char album[31] = "";
  char year[5] = "";
  char track;
  char genre;

  char wtitle[30] = "Fragil";
  char wartist[30] = "Petronel Parizer";

  FILE *song_file;
  song_file = fopen("demo.mp3", "rb+");

  fseek(song_file, -125, SEEK_END);
  fwrite(wtitle, sizeof(wtitle), 1, song_file);
  fwrite(wartist, sizeof(wartist), 1, song_file);

  fclose(song_file);

  song_file = fopen("demo.mp3", "rb+");

  fseek(song_file, -125, SEEK_END);
  fread(title, 1, 30, song_file);
  fread(artist, 1, 30, song_file);
  fread(album, 1, 30, song_file);

  printf ("Title: %s\n", title);
  printf ("Artist: %s\n", artist);
  printf ("Album: %s\n", album);
}


