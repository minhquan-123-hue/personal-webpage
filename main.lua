push = require 'push'

-- size of actual window 
WINDOW_WIDTH = 1280
WINDOW_HEIGHT = 720

-- size of virtual window
VIRTUAL_WIDTH = 432
VIRTUAL_HEIGHT = 243

function love.load()

    love.graphics.setDefaultFilter('nearest', 'nearest')

    love.window.setTitle('Flappy Bird')

    background = love.graphics.newImage('background.png')
    ground = love.graphics.newImage('ground.png')

    love.window.setMode(WINDOW_WIDTH, WINDOW_HEIGHT,{
        resizable = true,
        fullscreen = false,
        vsync = true
    })
    
    push.setupScreen(VIRTUAL_WIDTH, VIRTUAL_HEIGHT,{
        upscale = 'normal'
    })
end

function love.resize(w,h)
    push.resize(w,h)
end


function love.keypressed(key)
    if key == 'escape' then
        love.event.quit()
    end
end

function love.draw()
    push.start()

    love.graphics.clear(40/255,45/255,52/255,255/255)

    love.graphics.draw(background, 0,0)
    love.graphics.draw(ground,0 , VIRTUAL_HEIGHT - 16)
    
    push.finish()
end