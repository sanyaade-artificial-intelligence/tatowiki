#include <iostream>
#include "models/Articles.h"
#include "test.h"

#define TEST_NAME "models_get_from_lang_and_slug_test"
#define SQL_FILL_ARTICLES "../tests/models/articles/fill_articles.sql"
#define DB_SQL_FILE_PATH  "../sql/sqlite3.sql"


int main() {


    bool noTestFailed = true;
    models::Articles articlesModels(TEST_NAME ".db");

    TEST_RESULT_SHOULD_WORK(
        "Try load the database ... " ,
        articlesModels.import_sql_file(DB_SQL_FILE_PATH),
        noTestFailed
    );
    
    // we first load some raw articles on the database
    TEST_RESULT_SHOULD_WORK(
        "Try to load the database with some data ... " ,
        articlesModels.import_sql_file(SQL_FILL_ARTICLES),
        noTestFailed
    );
    
    // now we check if we can retrieve them

    results::Article firstArticle = articlesModels.get_from_lang_and_slug(
        "fr",
        "page_principale"
    );



}