<?php

// executia: php sax_xml_parser.php
//fisierul conduce.xml trebuie sa se gaseasca in acelasi director

$conducator = null;


//se executa la inceputul fiecarui tag

  function startElement($parser, $name, $attrs) {
      global $conducator;
      if ($attrs && $attrs['NAME']) {
          $conducator=$attrs['NAME'];
      }
  }


//se executa la finalul fiecarui tag

  function endElement($parser, $name) { }

//se executa pentru fiecare tag si primeste continutul acestuia

  function continut($parser, $data) {
      global $conducator;
      if(!empty($data)) {
          if ($data == 'bicicleta') {
              echo ($conducator."\n");
          }
      }
  }


// initializarea parserului

  $parser = xml_parser_create();

//specificarea componentelor parserului

  xml_set_element_handler($parser, "startElement", "endElement");
  xml_set_character_data_handler($parser, "continut");


//deschiderea fisierului

  if (!($handle = fopen('conduce.xml', "r"))) {
      die("could not open XML input");
  }

//parsarea xml-ului

  while($data = fread($handle, 4096)) {
      xml_parse($parser, $data);
  }

//eliberarea memoriei prin inchiderea parserului

  xml_parser_free($parser);
