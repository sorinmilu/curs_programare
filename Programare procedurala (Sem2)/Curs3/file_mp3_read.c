//gcc -Wall file_mp3_read.c -o file_mp3_read

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

  FILE *song_file;
  song_file = fopen("demo.mp3", "rb+");

  fseek(song_file, -125, SEEK_END);
  fread(title, 1, 30, song_file);
  fread(artist, 1, 30, song_file);
  fread(album, 1, 30, song_file);
  fread(year, 1, 4, song_file);
  fread(&track, 1, 1, song_file);
  fread(&genre, 1, 1, song_file);

  printf ("Title: %s\n", title);
  printf ("Artist: %s\n", artist);
  printf ("Album: %s\n", album);
  printf ("year: %s\n", year);
  printf ("track: %i\n", track);
  printf ("genre: %i\n", genre);
}