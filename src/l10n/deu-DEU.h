////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// columns/Col*
#define STRING_COLUMN_LABEL_DESC     "Beschreibung"
#define STRING_COLUMN_LABEL_DUE      "Fällig"
#define STRING_COLUMN_LABEL_END      "Ende"
#define STRING_COLUMN_LABEL_ENTERED  "Erfasst"
#define STRING_COLUMN_LABEL_COUNT    "Anzahl"
#define STRING_COLUMN_LABEL_COMPLETE "Erledigt"
#define STRING_COLUMN_LABEL_MOD      "Geändert"
#define STRING_COLUMN_LABEL_ADDED    "Hinzugefügt"
#define STRING_COLUMN_LABEL_AGE      "Alter"
#define STRING_COLUMN_LABEL_PROJECT  "Projekt"
#define STRING_COLUMN_LABEL_UNTIL    "Bis"
#define STRING_COLUMN_LABEL_WAIT     "Aufgeschoben"
#define STRING_COLUMN_LABEL_WAITING  "Aufgeschoben bis"
#define STRING_COLUMN_LABEL_RECUR    "Wiederh."
#define STRING_COLUMN_LABEL_RECUR_L  "Wiederholung"
#define STRING_COLUMN_LABEL_START    "Beginn"
#define STRING_COLUMN_LABEL_STARTED  "Begonnen"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Status"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Offen"
#define STRING_COLUMN_LABEL_STAT_CO  "Erledigt"
#define STRING_COLUMN_LABEL_STAT_DE  "Gelöscht"
#define STRING_COLUMN_LABEL_STAT_WA  "Wartet"
#define STRING_COLUMN_LABEL_STAT_RE  "Wiederholend"
#define STRING_COLUMN_LABEL_STAT_P   "O"
#define STRING_COLUMN_LABEL_STAT_C   "E"
#define STRING_COLUMN_LABEL_STAT_D   "G"
#define STRING_COLUMN_LABEL_STAT_W   "A"
#define STRING_COLUMN_LABEL_STAT_R   "W"
#define STRING_COLUMN_LABEL_TAGS     "Schlagworte"
#define STRING_COLUMN_LABEL_TAG      "Schlagwort"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Dringlichkeit"
#define STRING_COLUMN_LABEL_NAME     "Name"
#define STRING_COLUMN_LABEL_VALUE    "Wert"
#define STRING_COLUMN_LABEL_LAST     "Last instance"
#define STRING_COLUMN_LABEL_RTYPE    "Recurrence type"
#define STRING_COLUMN_LABEL_DATE     "Datum"
#define STRING_COLUMN_LABEL_COLUMN   "Spalten"
#define STRING_COLUMN_LABEL_STYLES   "Unterstützte Formate"
#define STRING_COLUMN_LABEL_EXAMPLES "Beispiele"
#define STRING_COLUMN_LABEL_SCHED    "Geplant"
#define STRING_COLUMN_LABEL_UDA      "Name"
#define STRING_COLUMN_LABEL_TYPE     "Typ"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Beschreibung"
#define STRING_COLUMN_LABEL_DEFAULT  "Standard"
#define STRING_COLUMN_LABEL_VALUES   "Erlaubte Werte"
#define STRING_COLUMN_LABEL_UDACOUNT "Nutzungshäufigkeit"
#define STRING_COLUMN_LABEL_ORPHAN   "Verwaiste UDA"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "Haus @Hausarbeit next"
#define STRING_COLUMN_EXAMPLES_PROJ  "Haus.Garten"
#define STRING_COLUMN_EXAMPLES_PAR   "Haus"
#define STRING_COLUMN_EXAMPLES_IND   "  Haus.Garten"
#define STRING_COLUMN_EXAMPLES_DESC  "Bekleidung einen Haken tiefer hängen"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Direkt vor dem Mittagessen"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Wenn Du heute Nachmittag in der Partie mitspielst"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Bevor Du den Brief nach Hause schreibst"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Wenn Dein Haar nicht geschnitten wird"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_EXEC_USAGE        "Führt externe Befehle und Skripte aus"
#define STRING_CMD_URGENCY_USAGE     "Zeigt die Dringlichkeit einer Aufgabe an"
#define STRING_CMD_URGENCY_RESULT    "Aufgabe {1}, Dringlichkeit {2}"
#define STRING_CMD_ADD_USAGE         "Fügt eine neue Aufgabe hinzu"
#define STRING_CMD_ADD_FEEDBACK      "Aufgabe {1} hinzugefügt."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_IDS_USAGE_RANGE   "Zeigt die IDs passender Aufgaben als Folge"
#define STRING_CMD_IDS_USAGE_LIST    "Zeigt die IDs passender Aufgaben als Liste"
#define STRING_CMD_IDS_USAGE_ZSH     "Zeigt die IDs und Beschreibungen passender Aufgaben"
#define STRING_CMD_UDAS_USAGE        "Zeigt alle festgelegten Eigenschaften von UDAs"
#define STRING_CMD_UDAS_COMPL_USAGE  "Zeigt festgelegte UDAs zur Autovervollständigung"
#define STRING_CMD_UUIDS_USAGE_RANGE "Zeigt die UUIDs passender Aufgaben als kommaseparierte Liste"
#define STRING_CMD_UUIDS_USAGE_LIST  "Zeigt die UUIDs passender Aufgaben als Liste"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Zeigt die UUIDs und Beschreibungen passender Aufgaben"
#define STRING_CMD_INFO_USAGE        "Zeigt alle Daten und Metadaten"
#define STRING_CMD_INFO_BLOCKED      "Aufgabe blockiert durch"
#define STRING_CMD_INFO_BLOCKING     "Aufgabe blockiert"
#define STRING_CMD_INFO_UNTIL        "Bis"
#define STRING_CMD_INFO_MODIFICATION "Änderung"
#define STRING_CMD_INFO_MODIFIED     "Letzte Änderung"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Macht die letzte Änderung an einer Aufgabe Rückgängig"
#define STRING_CMD_REPORTS_USAGE     "Zeigt alle unterstützten Reports"
#define STRING_CMD_REPORTS_REPORT    "Report"
#define STRING_CMD_REPORTS_DESC      "Beschreibung"
#define STRING_CMD_REPORTS_SUMMARY   "{1} Reports"
#define STRING_CMD_TAGS_USAGE        "Listet alle genutzten Schlagworte"
#define STRING_CMD_COMTAGS_USAGE     "Listet ausschließlich alle genutzten Schlagwörter zur Auto-Vervollständigung"
#define STRING_CMD_TAGS_SINGLE       "1 Schlagwort"
#define STRING_CMD_TAGS_PLURAL       "{1} Schlagworte"
#define STRING_CMD_TAGS_NO_TAGS      "Keine Schlagworte."
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_IMPORT_USAGE      "Importiert eine JSON-Datei"
#define STRING_CMD_IMPORT_SUMMARY    "{1} Aufgabe importiert."
#define STRING_CMD_IMPORT_FILE       "Importiere '{1}'"
#define STRING_CMD_IMPORT_MISSING    "Datei '{1}' nicht gefunden."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Kommentar fehlt Beschreibung: {1}"
#define STRING_TASK_NO_ENTRY         "Kommentar fehlt Erfassungsdatum: {1}"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Erzeugt eine Liste aller Befehle zur Auto-Vervollständigung"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Erzeugt eine Liste aller Befehle zur ZSH-Auto-Verfollständigung"
#define STRING_CMD_ZSHATTS_USAGE     "Erzeugt eine Liste Eigenschaften zur ZSH-Auto-Vervollständigung"
#define STRING_CMD_ALIASES_USAGE     "Erzeugt eine Liste aller Aliase zur Auto-Vervollständigung"

#define STRING_CMD_CUSTOM_MISMATCH   "Die Anzahl von Spalten und Beschriftungen für Report '{1}' unterscheidet sich."
#define STRING_CMD_CUSTOM_SHOWN      "{1} gezeigt"
#define STRING_CMD_CUSTOM_COUNT      "1 Aufgabe"
#define STRING_CMD_CUSTOM_COUNTN     "{1} Aufgaben"
#define STRING_CMD_CUSTOM_TRUNCATED  "auf {1} Zeilen gekürzt"
#define STRING_CMD_CAL_USAGE         "Zeigt einen Kalender mit hervorgehobenen fälligen Aufgaben"
#define STRING_CMD_CAL_BAD_MONTH     "Argument '{1}' ist kein zulässiger Monat."
#define STRING_CMD_CAL_BAD_ARG       "Konnte Argument '{1}' nicht erkennen."
#define STRING_CMD_CAL_LABEL_DATE    "Datum"
#define STRING_CMD_CAL_LABEL_HOL     "Feiertag"
#define STRING_CMD_CAL_SUN_MON       "Die 'weekstart'-Konfigurationsoption darf nur 'Sunday' oder 'Monday' lauten."

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Keine Aufgaben."
#define STRING_FEEDBACK_NO_MATCH     "Keine treffer."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 Aufgabe)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} Aufgaben)"
#define STRING_FEEDBACK_DELETED      "{1} wird gelöscht."
#define STRING_FEEDBACK_DEP_SET      "Abhängigkeit wird auf '{1}' gesetzt."
#define STRING_FEEDBACK_DEP_MOD      "Abhängigkeit wird von '{1}' zu '{2}' geändert."
#define STRING_FEEDBACK_DEP_DEL      "Abhängigkeit '{1}' wird gelöscht."
#define STRING_FEEDBACK_DEP_WAS_SET  "Abhängigkeit wurde auf '{1}' gesetzt."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependencies wurde von '{1}' zu '{2}' geändert."
#define STRING_FEEDBACK_ATT_SET      "{1} wird auf '{2}' gesetzt."
#define STRING_FEEDBACK_ATT_MOD      "{1} wird von '{2}' zu '{3}' geändert."
#define STRING_FEEDBACK_ATT_DEL      "{1} wird gelöscht."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} wird gelöscht (Dauer: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} wurde auf '{2}' gesetzt."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} wurde von '{2}' zu '{3}' geändert."
#define STRING_FEEDBACK_ANN_ADD      "Kommentar von '{1}' hinzugefügt."
#define STRING_FEEDBACK_ANN_DEL      "Kommentar '{1}' gelöscht."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Kommentar zu '{1}' geändert."
#define STRING_FEEDBACK_NOP          "Keine Änderungen werden durchgeführt."
#define STRING_FEEDBACK_WAS_NOP      "Keine Änderungen wurden durchgeführt."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Das besondere Schlagwort 'nocolor' deaktiviert Farb-Regeln für diese Aufgabe."
#define STRING_FEEDBACK_TAG_NONAG    "Das besondere Schlagwort 'nonag' verhindert Nachfragen, wenn diese Aufgabe geändert wird."
#define STRING_FEEDBACK_TAG_NOCAL    "Das besondere Schlagwort 'nocal' verhindert, dass diese Aufgabe im 'calendar'-Report erscheint."
#define STRING_FEEDBACK_TAG_NEXT     "Das besondere Schlagwort 'next' erhöht die Dringlichkeit dieser Aufgabe, sodass sie im 'next'-Report erscheint."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Aufgabe {1} '{2}' entsperrt."
#define STRING_FEEDBACK_EXPIRED      "Aufgabe {1} '{2}' ist abgelaufen und wurde gelöscht."
#define STRING_FEEDBACK_BACKLOG_N    "{1} Lokale Änderungen.  Datenabgleich erforderlich."
#define STRING_FEEDBACK_BACKLOG      "{1} Lokale Änderungen.  Datenabgleich erforderlich."

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior unterstützt Datei-Format 1 nicht mehr, welches ursprünglich zwischen dem 27. November 2006 und 31. Dezember 2007 eingesetzt wurde."
#define STRING_TASK_NO_FF2           "Taskwarrior unterstützt Datei-Format 2 nicht mehr, welches ursprünglich zwischen dem 1. Januar 2008 und 12. April 2009 eingesetzt wurde."
#define STRING_TASK_NO_FF3           "Taskwarrior unterstützt Datei-Format 3 nicht mehr, welches ursprünglich zwischen dem 23. März 2009 und 16. Mai 2009 eingesetzt wurde."
#define STRING_TASK_PARSE_UNREC_FF   "Nicht erkanntes taskwarrior-Dateiformat."
#define STRING_TASK_DEPEND_ITSELF    "Eine Aufgabe kann nicht von sich selbst abhängen."
#define STRING_TASK_DEPEND_MISS_CREA "Konnte keine Abhängigkeit von Aufgabe {1} erstellen - Aufgabe nicht gefunden."
#define STRING_TASK_DEPEND_MISS_DEL  "Konnte keine Abhängigkeit zu Aufgabe {1} löschen - nicht gefunden."
#define STRING_TASK_DEPEND_DUP       "Aufgabe {1} hängt bereits von Aufgabe {2} ab."
#define STRING_TASK_DEPEND_CIRCULAR  "Verbotene zyklische Abhängigkeit erkannt."
#define STRING_TASK_VALID_BLANK      "Leere Aufgaben können nicht angelegt werden."
#define STRING_TASK_VALID_BEFORE     "Warnung: Das '{1}'-Datum ist nach dem '{2}'-Datum."
#define STRING_TASK_VALID_REC_DUE    "Wiederholende Aufgaben müssen eine Fälligkeit besitzen."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Befehl an Ausführung gehindert."
#define STRING_TASK_SAFETY_ALLOW     "Kein Filter angegeben, und durch den konfigurierten 'allow.empty.filter'-Wert wurde keine Aktion durchgeführt."
#define STRING_TASK_INVALID_COL_TYPE "Nicht erkannter Typ '{1}' für Spalte '{2}'"

#endif
