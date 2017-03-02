// Just save the contents of the main HTML page as a string in flash memory.
// Remember this can't be insanely big, there's only 512KB total flash!

// Note the raw string literal R syntax is C++11 only!
const char* index_html = R"(
  <!DOCTYPE html>
  <html>
    <head>
      <title>Lamp control</title>
      <link href="//netdna.bootstrapcdn.com/bootstrap/3.1.1/css/bootstrap.min.css" rel="stylesheet">
      <style>
        body {
          padding-top: 50px;
          padding-bottom: 20px;
        }
      </style>
    </head>
    <body>
      <div class="container">
        <div class="row">
          <div class="jumbotron col-md-5">
            <h1>Morse</h1>
            <p>Submit text to have it blinked out as morse code on the lamp</p>
            <form action="/morse" method="post">
              <div class="form-group">
                <input class="form-control input-lg" type="text" id="message" name="message" placeholder="Enter message...">
              </div>
              <button class="btn btn-lg btn-primary" type="submit">Blink it!</button>
            </form>
          </div>

          <div class="jumbotron col-md-offset-2 col-md-5">
            <h1>Turn Lamp on or off</h1>
            <p>Turn the lamp on or off</p>
            <a href="/on"><button class="btn btn-lg btn-primary">On</button></a>
            <a href="/off"><button class="btn btn-lg btn-primary">Off</button></a>
          </div>
        </div>`
      </div>
    </body>
  </html>
)";
