project('freesteamapi', ['cpp'])

gen_types = find_program('gen/gen_types.py')
gen_iface = find_program('gen/gen_iface.py')
gen_iface_loader = find_program('gen/gen_iface_loader.py')
gen_entrypoint_patcher = find_program('gen/gen_entrypoint_patcher.py')

openssl = dependency('openssl')

steam_types = custom_target(
    'steam_types.h',
    output : 'steam_types.h',
    input : 'steamapi.xml',
    command : [gen_types, '@INPUT@', '@OUTPUT@'],
)

ifaces = custom_target(
    'steam_interfaces.h',
    output : 'steam_interfaces.h',
    input : 'steamapi.xml',
    command : [gen_iface, '@INPUT@', '@OUTPUT@'],
)

iface_loader = custom_target(
    'interface_loader.h',
    output : 'interface_loader.h',
    input : 'steamapi.xml',
    command : [gen_iface_loader, '@INPUT@', '@OUTPUT@'],
)

entrypoint_patcher = custom_target(
    'entrypoint_patcher.h',
    output : 'entrypoint_patcher.h',
    command : [gen_entrypoint_patcher, '@OUTPUT@'],
)

steam_api_srcs = [
    'src/steam_api.cc',
    steam_types,
    ifaces,
    iface_loader,
    entrypoint_patcher,
    'src/Apps.cc',
    'src/AppList.cc',
    'src/Client.cc',
    'src/Controller.cc',
    'src/Friends.cc',
    'src/HTMLSurface.cc',
    'src/HTTP.cc',
    'src/Inventory.cc',
    'src/Matchmaking.cc',
    'src/Matchmaking.cc',
    #FIXME 'src/MatchmakingServers.cc',
    'src/Music.cc',
    'src/MusicRemote.cc',
    'src/Networking.cc',
    'src/RemoteStorage.cc',
    'src/Screenshots.cc',
    'src/User.cc',
    'src/UserStats.cc',
    'src/Utils.cc',
    'src/UGC.cc',
    'src/Video.cc',
    'src/AppTicket.cc',
    'src/GameServer.cc',
    'src/GameServerStats.cc',
    'src/GameCoordinator.cc',
    'src/ParentalSettings.cc',
]

shared_library('steam_api', [steam_api_srcs], dependencies : [openssl])

