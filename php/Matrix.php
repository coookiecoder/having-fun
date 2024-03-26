<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <link rel="stylesheet" href="../css/nav.css">
        <link rel="stylesheet" href="../css/main.css">
        <link rel="stylesheet" href="../css/footer.css">
        <link rel="stylesheet" href="../css/common.css">
        <title>Home</title>
    </head>
    <body>
        <?php include "../html/nav.html" ?>
        <main>
            <div class="title"><h1>Welcome to the matrix project</h1></div>
            <div class="content"><h3>Matrix is a project a 42 School which make you do matrix in the language of your choice, I have chosen C++</h3></div>
            <div id="base">
                <div class="part_title"><h3>Here some starting point :</h3></div>
                <div class="code_title"><pre>base.tpp</pre></div>
                <div class="code"><pre><?php echo htmlentities(file_get_contents("../Matrix/base.tpp")) ?></pre></div>
            </div>
            <div class="content"><h3>Now let's have some "fun" we need to output the info right ?</h3></div>
            <div id="output">
                <div class="part_title"><h3>Here are the output and the sub-function :</h3></div>
                <div class="code_title"><pre>output.tpp</pre></div>
                <div class="code"><pre><?php echo htmlentities(file_get_contents("../Matrix/output.tpp")) ?></pre></div>
            </div>
            <div class="content"><h3>We are almost at the first exercise, yeah I know it seems useless to do all of that but trust me we will need all of that later, let's do the set and get function</h3></div>
            <div id="set and get">
                <div class="part_title"><h3>Here are the set and get function :</h3></div>
                <div class="code_title"><pre>set_get.tpp</pre></div>
                <div class="code"><pre><?php echo htmlentities(file_get_contents("../Matrix/set_get.tpp")) ?></pre></div>
            </div>
            <div class="content"><h3>Finally, before starting the first exercise let do some conversion</h3></div>
            <div id="converter">
                <div class="part_title"><h3>Here are the converter function :</h3></div>
                <div class="code_title"><pre>converter.tpp</pre></div>
                <div class="code"><pre><?php echo htmlentities(file_get_contents("../Matrix/converter.tpp")) ?></pre></div>
            </div>
        </main>
        <?php include "../html/footer.html" ?>
    </body>
</html>